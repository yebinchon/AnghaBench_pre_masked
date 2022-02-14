
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_tc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,void (*) (atf_tc_t*),void (*) (atf_tc_t const*),int *,char const* const*) ;
 int FUNC_3 (int *,char*,char*,char*) ;

__attribute__((used)) static
void
FUNC_4(const char *VAR_0, void (*VAR_1)(atf_tc_t *),
                  void (*VAR_2)(const atf_tc_t *))
{
    atf_tc_t VAR_3;
    const char *const VAR_4[] = { ((void*)0) };

    FUNC_0(FUNC_2(&VAR_3, VAR_0, VAR_1, VAR_2, ((void*)0), VAR_4));
    FUNC_3(&VAR_3, "output", "error", "result");
    FUNC_1(&VAR_3);
}
