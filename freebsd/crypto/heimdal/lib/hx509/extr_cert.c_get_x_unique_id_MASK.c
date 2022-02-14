
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hx509_context ;
typedef int heim_bit_string ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int ,int ,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_2(hx509_context VAR_1, const char *VAR_2,
  const heim_bit_string *VAR_3, heim_bit_string *VAR_4)
{
    int VAR_5;

    if (VAR_3 == ((void*)0)) {
 VAR_5 = VAR_0;
 FUNC_1(VAR_1, 0, VAR_5, "%s unique id doesn't exists", VAR_2);
 return VAR_5;
    }
    VAR_5 = FUNC_0(VAR_3, VAR_4);
    if (VAR_5) {
 FUNC_1(VAR_1, 0, VAR_5, "malloc out of memory", VAR_2);
 return VAR_5;
    }
    return 0;
}
