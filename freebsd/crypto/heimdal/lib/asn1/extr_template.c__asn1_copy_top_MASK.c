
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_template {int offset; } ;


 int FUNC_0 (struct asn1_template const*,void const*,void*) ;
 int FUNC_1 (struct asn1_template const*,void*) ;
 int FUNC_2 (void*,int ,int ) ;

int
FUNC_3(const struct asn1_template *VAR_0, const void *VAR_1, void *VAR_2)
{
    int VAR_3;
    FUNC_2(VAR_2, 0, VAR_0->offset);
    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
    if (VAR_3) {
 FUNC_1(VAR_0, VAR_2);
 FUNC_2(VAR_2, 0, VAR_0->offset);
    }
    return VAR_3;
}
