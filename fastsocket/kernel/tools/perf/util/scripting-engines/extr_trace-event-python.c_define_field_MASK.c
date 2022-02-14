
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum print_arg_type { ____Placeholder_print_arg_type } print_arg_type ;
typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(enum print_arg_type VAR_3,
    const char *VAR_4,
    const char *VAR_5,
    const char *VAR_6)
{
 const char *VAR_7 = "define_flag_field";
 PyObject *VAR_8, *VAR_9, *VAR_10;
 unsigned VAR_11 = 0;

 if (VAR_3 == VAR_1)
  VAR_7 = "define_symbolic_field";

 if (VAR_3 == VAR_0)
  VAR_9 = FUNC_4(3);
 else
  VAR_9 = FUNC_4(2);
 if (!VAR_9)
  FUNC_7("couldn't create Python tuple");

 FUNC_5(VAR_9, VAR_11++, FUNC_3(VAR_4));
 FUNC_5(VAR_9, VAR_11++, FUNC_3(VAR_5));
 if (VAR_3 == VAR_0)
  FUNC_5(VAR_9, VAR_11++, FUNC_3(VAR_6));

 VAR_8 = FUNC_1(VAR_2, VAR_7);
 if (VAR_8 && FUNC_0(VAR_8)) {
  VAR_10 = FUNC_2(VAR_8, VAR_9);
  if (VAR_10 == ((void*)0))
   FUNC_8(VAR_7);
 }

 FUNC_6(VAR_9);
}
