
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum print_arg_type { ____Placeholder_print_arg_type } print_arg_type ;
typedef int PyObject ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 int FUNC_2 (unsigned long long) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 unsigned long long FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_11(enum print_arg_type VAR_2,
    const char *VAR_3,
    const char *VAR_4,
    const char *VAR_5,
    const char *VAR_6)
{
 const char *VAR_7 = "define_flag_value";
 PyObject *VAR_8, *VAR_9, *VAR_10;
 unsigned long long VAR_11;
 unsigned VAR_12 = 0;

 if (VAR_2 == VAR_0)
  VAR_7 = "define_symbolic_value";

 VAR_9 = FUNC_5(4);
 if (!VAR_9)
  FUNC_8("couldn't create Python tuple");

 VAR_11 = FUNC_9(VAR_5);

 FUNC_6(VAR_9, VAR_12++, FUNC_4(VAR_3));
 FUNC_6(VAR_9, VAR_12++, FUNC_4(VAR_4));
 FUNC_6(VAR_9, VAR_12++, FUNC_2(VAR_11));
 FUNC_6(VAR_9, VAR_12++, FUNC_4(VAR_6));

 VAR_8 = FUNC_1(VAR_1, VAR_7);
 if (VAR_8 && FUNC_0(VAR_8)) {
  VAR_10 = FUNC_3(VAR_8, VAR_9);
  if (VAR_10 == ((void*)0))
   FUNC_10(VAR_7);
 }

 FUNC_7(VAR_9);
}
