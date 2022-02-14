
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct nfsd4_exchange_id {char clientid; int seqid; int flags; scalar_t__ spa_how; } ;
struct nfsd4_compoundres {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {char* nodename; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 TYPE_1__* FUNC_8 () ;

__attribute__((used)) static __be32
FUNC_9(struct nfsd4_compoundres *VAR_1, int VAR_2,
    struct nfsd4_exchange_id *VAR_3)
{
 __be32 *VAR_4;
 char *VAR_5;
 char *VAR_6;
 int VAR_7;
 int VAR_8;
 uint64_t VAR_9 = 0;

 if (VAR_2)
  return VAR_2;

 VAR_5 = FUNC_8()->nodename;
 VAR_7 = FUNC_7(VAR_5);
 VAR_6 = FUNC_8()->nodename;
 VAR_8 = FUNC_7(VAR_6);

 FUNC_2(
  8 +
  4 +
  4 +
  4 +
  8 +
  4 +
  (FUNC_6(VAR_7) * 4) +
  4 +
  (FUNC_6(VAR_8) * 4) +
  4 );

 FUNC_5(&VAR_3->clientid, 8);
 FUNC_3(VAR_3->seqid);
 FUNC_3(VAR_3->flags);


 FUNC_1(VAR_3->spa_how != VAR_0);
 FUNC_3(VAR_3->spa_how);


 FUNC_4(VAR_9);

 FUNC_3(VAR_7);
 FUNC_5(VAR_5, VAR_7);


 FUNC_3(VAR_8);
 FUNC_5(VAR_6, VAR_8);


 FUNC_3(0);
 FUNC_0();
 return 0;
}
