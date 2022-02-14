
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_class {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,struct g_class*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_2(struct g_class *VAR_12)
{


 if (VAR_1 <= 0 ||
     (VAR_10 / VAR_1 == 0)) {
  VAR_1 = 5;
 }
 if (VAR_2 > 0) {
  VAR_2 = VAR_10 / VAR_1;
  VAR_3 =
      (VAR_2 / 100) * VAR_4;
 }
 VAR_6 = FUNC_0(VAR_9,
     VAR_8, VAR_12, VAR_0);
 if (VAR_6 == ((void*)0))
  FUNC_1(0, "Warning! Cannot register shutdown event.");
 VAR_5 = FUNC_0(VAR_11,
     VAR_7, VAR_12, VAR_0);
 if (VAR_5 == ((void*)0))
  FUNC_1(0, "Warning! Cannot register lowmem event.");
}
