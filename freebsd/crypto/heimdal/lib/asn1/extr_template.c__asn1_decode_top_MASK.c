
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asn1_template {int offset; } ;


 int FUNC_0 (struct asn1_template const*,unsigned int,unsigned char const*,size_t,void*,size_t*) ;
 int FUNC_1 (struct asn1_template const*,void*) ;
 int FUNC_2 (void*,int ,int ) ;

int
FUNC_3(const struct asn1_template *VAR_0, unsigned VAR_1, const unsigned char *VAR_2, size_t VAR_3, void *VAR_4, size_t *VAR_5)
{
    int VAR_6;
    FUNC_2(VAR_4, 0, VAR_0->offset);
    VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6) {
 FUNC_1(VAR_0, VAR_4);
 FUNC_2(VAR_4, 0, VAR_0->offset);
    }

    return VAR_6;
}
