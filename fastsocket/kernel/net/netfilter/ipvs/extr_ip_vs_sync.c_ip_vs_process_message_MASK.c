
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ver_size; } ;
union ip_vs_sync_conn {TYPE_1__ v4; } ;
struct ip_vs_sync_mesg_v0 {int dummy; } ;
struct ip_vs_sync_mesg {int size; scalar_t__ syncid; scalar_t__ version; scalar_t__ reserved; scalar_t__ spare; int nr_conns; } ;
typedef int __u8 ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,size_t const) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(__u8 *VAR_4, const size_t VAR_5)
{
 struct ip_vs_sync_mesg *VAR_6 = (struct ip_vs_sync_mesg *)VAR_4;
 __u8 *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 < sizeof(struct ip_vs_sync_mesg_v0)) {
  FUNC_0(2, "BACKUP, message header too short\n");
  return;
 }

 VAR_6->size = FUNC_4(VAR_6->size);

 if (VAR_5 != VAR_6->size) {
  FUNC_0(2, "BACKUP, bogus message size\n");
  return;
 }

 if (VAR_3 != 0 && VAR_6->syncid != VAR_3) {
  FUNC_0(7, "BACKUP, Ignoring syncid = %d\n", VAR_6->syncid);
  return;
 }

 if ((VAR_6->version == VAR_2) && (VAR_6->reserved == 0)
     && (VAR_6->spare == 0)) {

  VAR_8 = VAR_4 + sizeof(struct ip_vs_sync_mesg);
  VAR_10 = VAR_6->nr_conns;

  for (VAR_9=0; VAR_9<VAR_10; VAR_9++) {
   union ip_vs_sync_conn *VAR_11;
   unsigned VAR_12;
   int VAR_13;

   VAR_7 = VAR_8;
   if (VAR_7 + sizeof(VAR_11->v4) > VAR_4+VAR_5) {
    FUNC_1("BACKUP, Dropping buffer, to small\n");
    return;
   }
   VAR_11 = (union ip_vs_sync_conn *)VAR_7;
   VAR_12 = FUNC_4(VAR_11->v4.ver_size) & VAR_0;
   VAR_8 = VAR_7 + VAR_12;

   if (VAR_8 > VAR_4+VAR_5) {
    FUNC_1("BACKUP, Dropping buffer, msg > buffer\n");
    return;
   }
   if (FUNC_4(VAR_11->v4.ver_size) >> VAR_1) {
    FUNC_1("BACKUP, Dropping buffer, Unknown version %d\n",
           FUNC_4(VAR_11->v4.ver_size) >> VAR_1);
    return;
   }

   if ((VAR_13=FUNC_2(VAR_7, VAR_8)) < 0) {
    FUNC_1("BACKUP, Dropping buffer, Err: %d in decoding\n",
          VAR_13);
    return;
   }

   VAR_8 = VAR_7 + ((VAR_12 + 3) & ~3);
  }
 } else {

  FUNC_3(VAR_4, VAR_5);
  return;
 }
}
