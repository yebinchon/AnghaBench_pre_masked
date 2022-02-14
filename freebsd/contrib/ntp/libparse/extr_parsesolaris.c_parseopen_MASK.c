
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_16__ {scalar_t__ q_ptr; } ;
typedef TYPE_3__ queue_t ;
struct TYPE_14__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_15__ {scalar_t__ serial; TYPE_1__ tv; } ;
struct TYPE_17__ {int parse_io; TYPE_2__ parse_ppsclockev; int parse_status; TYPE_3__* parse_queue; } ;
typedef TYPE_4__ parsestream_t ;
typedef int dev_t ;
typedef int cred_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_18__ {int strmod_linkinfo; } ;
struct TYPE_13__ {scalar_t__ q_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_11__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 TYPE_9__ VAR_9 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_11(
   queue_t *VAR_10,
   dev_t *VAR_11,
   int VAR_12,
   int VAR_13,
   cred_t *VAR_14
   )
{
 register parsestream_t *VAR_15;
 static int VAR_16 = 0;

 FUNC_7(VAR_1, "parse: OPEN - q=%x\n", VAR_10);

 if (VAR_13 != VAR_6)
 {
  FUNC_7(VAR_1, "parse: OPEN - FAILED - not MODOPEN\n");
  return VAR_3;
 }

 if (VAR_10->q_ptr != (caddr_t)((void*)0))
 {
  FUNC_7(VAR_1, "parse: OPEN - FAILED - EXCLUSIVE ONLY\n");
  return VAR_2;
 }

 VAR_10->q_ptr = (caddr_t)FUNC_4(sizeof(parsestream_t), VAR_5);
 if (VAR_10->q_ptr == (caddr_t)0)
 {
  return VAR_4;
 }

 FUNC_7(VAR_1, "parse: OPEN - parse area q=%x, q->q_ptr=%x\n", VAR_10, VAR_10->q_ptr);
 FUNC_0(VAR_10)->q_ptr = VAR_10->q_ptr;
 FUNC_7(VAR_1, "parse: OPEN - WQ parse area q=%x, q->q_ptr=%x\n", FUNC_0(VAR_10), FUNC_0(VAR_10)->q_ptr);

 VAR_15 = (parsestream_t *) VAR_10->q_ptr;
 FUNC_1((caddr_t)VAR_15, sizeof(*VAR_15));
 VAR_15->parse_queue = VAR_10;
 VAR_15->parse_status = VAR_8;
 VAR_15->parse_ppsclockev.tv.tv_sec = 0;
 VAR_15->parse_ppsclockev.tv.tv_usec = 0;
 VAR_15->parse_ppsclockev.serial = 0;

 FUNC_9(VAR_10);

 FUNC_7(VAR_1, "parse: OPEN - initializing io subsystem q=%x\n", VAR_10);

 if (!FUNC_6(&VAR_15->parse_io))
 {



  FUNC_8(VAR_10);

  FUNC_5((caddr_t)VAR_15, sizeof(parsestream_t));

  return VAR_3;
 }

 FUNC_7(VAR_1, "parse: OPEN - initializing stream q=%x\n", VAR_10);

 if (FUNC_10(VAR_10, VAR_7))
 {
  (void) FUNC_3(VAR_10);
  FUNC_7(VAR_1, "parse: OPEN - SUCCEEDED\n");





  if (!VAR_16)
  {
    FUNC_2(VAR_0, "?%s: Copyright (c) 1993-2005, Frank Kardel\n", VAR_9.strmod_linkinfo);
   VAR_16 = 1;
  }

  return 0;
 }
 else
 {
  FUNC_8(VAR_10);

  FUNC_5((caddr_t)VAR_15, sizeof(parsestream_t));

  return VAR_3;
 }
}
