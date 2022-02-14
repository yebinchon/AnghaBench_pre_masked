
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t len; char* string; int charset; } ;
struct TYPE_5__ {size_t len; char* octet_seq; } ;
struct TYPE_8__ {TYPE_3__ irda_attrib_string; TYPE_1__ irda_attrib_octet_seq; int irda_attrib_int; } ;
struct irda_ias_set {int irda_attrib_type; TYPE_4__ attribute; } ;
struct TYPE_6__ {int string; int oct_seq; int integer; } ;
struct ias_value {int type; size_t len; TYPE_2__ t; int charset; } ;


 int VAR_0 ;




 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static int FUNC_1(struct irda_ias_set *VAR_1,
      struct ias_value *VAR_2)
{

 switch (VAR_2->type) {
 case 131:

  VAR_1->attribute.irda_attrib_int = VAR_2->t.integer;
  break;
 case 129:

  VAR_1->attribute.irda_attrib_octet_seq.len = VAR_2->len;

  FUNC_0(VAR_1->attribute.irda_attrib_octet_seq.octet_seq,
         VAR_2->t.oct_seq, VAR_2->len);
  break;
 case 128:

  VAR_1->attribute.irda_attrib_string.len = VAR_2->len;
  VAR_1->attribute.irda_attrib_string.charset = VAR_2->charset;

  FUNC_0(VAR_1->attribute.irda_attrib_string.string,
         VAR_2->t.string, VAR_2->len);

  VAR_1->attribute.irda_attrib_string.string[VAR_2->len] = '\0';
  break;
 case 130:
 default :
  return -VAR_0;
 }


 VAR_1->irda_attrib_type = VAR_2->type;

 return 0;
}
