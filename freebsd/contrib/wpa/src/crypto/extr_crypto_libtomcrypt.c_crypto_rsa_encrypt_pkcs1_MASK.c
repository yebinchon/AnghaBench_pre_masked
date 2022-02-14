
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int N; } ;
typedef TYPE_1__ rsa_key ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,unsigned long,int const*,size_t,int *,size_t*) ;
 int FUNC_3 (int *,unsigned long,int *,unsigned long*,int,TYPE_1__*) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2, rsa_key *VAR_3, int VAR_4,
        const u8 *VAR_5, size_t VAR_6,
        u8 *VAR_7, size_t *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_3->N);

 if (FUNC_2(VAR_2, VAR_10, VAR_5, VAR_6,
         VAR_7, VAR_8) < 0)
  return -1;

 VAR_9 = *VAR_8;
 VAR_11 = FUNC_3(VAR_7, VAR_10, VAR_7, &VAR_9, VAR_4, VAR_3);
 if (VAR_11 != VAR_0) {
  FUNC_4(VAR_1, "LibTomCrypt: rsa_exptmod failed: %s",
      FUNC_0(VAR_11));
  return -1;
 }
 *VAR_8 = VAR_9;

 return 0;
}
