
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MY_OBJ ;


 int VAR_0 ;
 int FUNC_0 (char*,long,long) ;
 long FUNC_1 (int *,long,int ) ;

__attribute__((used)) static void
FUNC_2(MY_OBJ * VAR_1, long VAR_2)
{
    long VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_0);

    if (VAR_3 != VAR_2) {
 FUNC_0("Cannot set file position to %ld (actual %ld)\n",
      VAR_2, VAR_3);
    }
}
