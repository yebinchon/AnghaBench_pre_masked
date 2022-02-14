
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int objset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int,int,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_6(objset_t *VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
 uint32_t VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_7);
 VAR_10 = FUNC_0(VAR_8);


 if (!VAR_4 && (VAR_9 || VAR_10)) {
  uint64_t VAR_11;


  FUNC_1(FUNC_3(VAR_6, VAR_1, VAR_2,
      8, 1, &VAR_11) == 0);
  FUNC_4(&VAR_5, &VAR_3);
  (void) FUNC_5(VAR_6, VAR_11,
      &VAR_5, &VAR_3);
  VAR_4 = VAR_0;
 }

 FUNC_2(VAR_7, "uid");
 FUNC_2(VAR_8, "gid");
}
