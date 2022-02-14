
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int newkey ;
struct TYPE_2__ {int fs_key; int fs_counter; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *,size_t,int *,int *,int *,int ) ;
 int FUNC_5 (int *,size_t,int *) ;
 int FUNC_6 (int ) ;

void
FUNC_7(uint8_t *VAR_4, size_t VAR_5)
{
 uint8_t VAR_6[VAR_1];

 if (VAR_2) {
  FUNC_5(VAR_4, VAR_5, VAR_6);
  goto out;
 }

 FUNC_2();
 FUNC_0(!FUNC_6(VAR_3.fs_counter), ("FS&K: C != 0"));

 FUNC_4(VAR_4, VAR_5, VAR_6,
     &VAR_3.fs_counter, &VAR_3.fs_key, VAR_0);

 FUNC_1();

out:
 FUNC_3(VAR_6, sizeof(VAR_6));
}
