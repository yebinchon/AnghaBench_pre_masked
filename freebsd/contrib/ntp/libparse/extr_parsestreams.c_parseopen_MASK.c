
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {scalar_t__ q_ptr; } ;
typedef TYPE_3__ queue_t ;
struct TYPE_13__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_14__ {scalar_t__ serial; TYPE_1__ tv; } ;
struct TYPE_16__ {int parse_io; TYPE_2__ parse_ppsclockev; int parse_status; TYPE_3__* parse_queue; } ;
typedef TYPE_4__ parsestream_t ;
typedef int dev_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_18__ {char* Drv_name; } ;
struct TYPE_17__ {int u_error; } ;
struct TYPE_12__ {scalar_t__ q_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_10__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*) ;
 TYPE_7__ VAR_7 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ) ;
 TYPE_5__ VAR_8 ;

__attribute__((used)) static int
FUNC_9(
 queue_t *VAR_9,
 dev_t VAR_10,
 int VAR_11,
 int VAR_12
 )
{
 register parsestream_t *VAR_13;
 static int VAR_14 = 0;

 FUNC_6(VAR_0,("parse: OPEN\n"));

 if (VAR_12 != VAR_2)
 {
  FUNC_6(VAR_0,("parse: OPEN - FAILED - not MODOPEN\n"));
  return VAR_4;
 }

 if (VAR_9->q_ptr != (caddr_t)((void*)0))
 {
  VAR_8.u_error = VAR_1;
  FUNC_6(VAR_0,("parse: OPEN - FAILED - EXCLUSIVE ONLY\n"));
  return VAR_4;
 }





 VAR_9->q_ptr = (caddr_t)FUNC_3(sizeof(parsestream_t));
 if (VAR_9->q_ptr == (caddr_t)0)
 {
  FUNC_6(VAR_0,("parse: OPEN - FAILED - no memory\n"));



  return VAR_4;
 }
 FUNC_0(VAR_9)->q_ptr = VAR_9->q_ptr;

 VAR_13 = (parsestream_t *)(void *)VAR_9->q_ptr;
 FUNC_1((caddr_t)VAR_13, sizeof(*VAR_13));
 VAR_13->parse_queue = VAR_9;
 VAR_13->parse_status = VAR_5;
 VAR_13->parse_ppsclockev.tv.tv_sec = 0;
 VAR_13->parse_ppsclockev.tv.tv_usec = 0;
 VAR_13->parse_ppsclockev.serial = 0;

 if (!FUNC_5(&VAR_13->parse_io))
 {



  FUNC_4((caddr_t)VAR_13, sizeof(parsestream_t));



  return VAR_4;
 }

 if (FUNC_8(VAR_9, VAR_3))
 {
  (void) FUNC_2(VAR_9);

  FUNC_6(VAR_0,("parse: OPEN - SUCCEEDED\n"));





  if (!VAR_14)
  {



   FUNC_7("%s: Copyright (C) 1991-2005, Frank Kardel\n", "parsestreams.c,v 4.11 2005/04/16 17:32:10 kardel RELEASE_20050508_A");

   VAR_14 = 1;
  }

  return VAR_2;
 }
 else
 {
  FUNC_4((caddr_t)VAR_13, sizeof(parsestream_t));




  return VAR_4;
 }
}
