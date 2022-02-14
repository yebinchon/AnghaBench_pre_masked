
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union u_spcl {int dummy; } u_spcl ;
struct slave {int sent; int fd; scalar_t__* tblock; struct req* req; void* tapea; } ;
struct req {scalar_t__ count; scalar_t__ dblk; } ;
typedef void* int64_t ;
struct TYPE_2__ {void* c_tapea; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int ) ;
 void* VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 struct slave* VAR_6 ;
 struct slave* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_5(void)
{
 struct req *VAR_12, *VAR_13, *VAR_14;
 struct slave *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int64_t VAR_19;
 union u_spcl *VAR_20, *VAR_21;
 VAR_15 = &VAR_6[VAR_1];
 VAR_20 = (union u_spcl *)VAR_15->tblock[1];







 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++) {
  VAR_13 = &VAR_15->req[1];
  VAR_21 = (union u_spcl *)VAR_7->tblock;





  VAR_14 = ((void*)0);
  for (VAR_12 = VAR_7->req; VAR_12->count > 0; VAR_12 += VAR_12->count) {
   *VAR_13 = *VAR_12;
   if (VAR_12->dblk == 0)
    *VAR_20++ = *VAR_21++;
   VAR_14 = VAR_13;
   VAR_13 += VAR_13->count;
  }
  if (VAR_14 == ((void*)0))
   FUNC_3("rollforward: protocol botch");
  if (VAR_14->dblk != 0)
   VAR_14->count -= 1;
  else
   VAR_20--;
  VAR_13 -= 1;
  VAR_13->count = 0;
  VAR_13 = &VAR_15->req[0];
  if (VAR_16 == 0) {
   VAR_13->dblk = 0;
   VAR_13->count = 1;
   VAR_9 = 0;
   VAR_4 = VAR_15->tblock;
   VAR_19 = VAR_8.c_tapea;
   VAR_8.c_tapea = VAR_7->tapea;
   FUNC_4(0);
   VAR_8.c_tapea = VAR_19;
   VAR_3 = VAR_19 - 1;
  }
  VAR_17 = (char *)VAR_20 - (char *)VAR_13;
  if (FUNC_0(VAR_10, VAR_7->fd, (char *)VAR_13, VAR_17) != VAR_17) {
   FUNC_2("  DUMP: error writing command pipe");
   FUNC_1(0);
  }
  VAR_7->sent = 1;
  if (++VAR_7 >= &VAR_6[VAR_1])
   VAR_7 = &VAR_6[0];

  VAR_13->count = 1;

  if (VAR_14->dblk != 0) {





   VAR_13->dblk = VAR_14->dblk +
    VAR_14->count * (VAR_2 / VAR_0);
   VAR_20 = (union u_spcl *)VAR_15->tblock;
  } else {




   VAR_13->dblk = 0;
   *((union u_spcl *)VAR_15->tblock) = *VAR_20;
   VAR_20 = (union u_spcl *)VAR_15->tblock[1];
  }
 }
 VAR_7->req[0] = *VAR_13;
 VAR_4 = VAR_7->tblock;
 if (VAR_13->dblk == 0)
  VAR_4++;
 VAR_9 = 1;





 if (VAR_7->sent) {
  if (FUNC_0(VAR_5, VAR_7->fd, (char *)&VAR_18, sizeof VAR_18)
      != sizeof VAR_18) {
   FUNC_2("  DUMP: error reading command pipe in master");
   FUNC_1(0);
  }
  VAR_7->sent = 0;

  if (VAR_18 != VAR_11) {
   FUNC_3("EOT detected at start of the tape!\n");
  }
 }
}
