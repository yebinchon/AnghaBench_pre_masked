
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child_print_data {char* m_msg; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
void
FUNC_2(void *VAR_3)
{
    struct child_print_data *VAR_4 = VAR_3;

    FUNC_1(VAR_2, "stdout: %s\n", VAR_4->m_msg);
    FUNC_1(VAR_1, "stderr: %s\n", VAR_4->m_msg);

    FUNC_0(VAR_0);
}
