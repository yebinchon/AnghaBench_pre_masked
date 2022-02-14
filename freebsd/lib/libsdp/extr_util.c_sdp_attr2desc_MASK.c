
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef TYPE_1__* sdp_attr_desc_p ;
struct TYPE_3__ {char const* desc; scalar_t__ attr; } ;


 TYPE_1__* VAR_0 ;

char const *
FUNC_0(uint16_t VAR_1)
{
 register sdp_attr_desc_p VAR_2 = VAR_0;

 for (; VAR_2->desc != ((void*)0); VAR_2++)
  if (VAR_1 == VAR_2->attr)
   break;

 return ((VAR_2->desc != ((void*)0))? VAR_2->desc : "Unknown");
}
