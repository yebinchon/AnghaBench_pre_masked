
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ unichar ;
struct TYPE_4__ {size_t len; scalar_t__ rid; struct TYPE_4__* next; int usz; } ;
typedef TYPE_1__ mc_keyword ;
struct TYPE_5__ {TYPE_1__* tok; } ;


 scalar_t__ MCFACILITY ;
 scalar_t__ MCFACILITYNAMES ;
 scalar_t__ MCLANGUAGE ;
 scalar_t__ MCLANGUAGENAMES ;
 scalar_t__ MCMESSAGEID ;
 scalar_t__ MCMESSAGEIDTYPEDEF ;
 scalar_t__ MCOUTPUTBASE ;
 scalar_t__ MCSEVERITY ;
 scalar_t__ MCSEVERITYNAMES ;
 scalar_t__ MCSYMBOLICNAME ;
 scalar_t__ MCTOKEN ;
 TYPE_1__* keyword_top ;
 int mc_add_keyword_ascii (char*,scalar_t__,char*,int,char*) ;
 int memcmp (int ,scalar_t__ const*,size_t) ;
 TYPE_2__ yylval ;

__attribute__((used)) static int
mc_token (const unichar *t, size_t len)
{
  static int was_init = 0;
  mc_keyword *k;

  if (! was_init)
    {
      was_init = 1;
      mc_add_keyword_ascii ("OutputBase", MCOUTPUTBASE, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("MessageIdTypedef", MCMESSAGEIDTYPEDEF, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("SeverityNames", MCSEVERITYNAMES, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("FacilityNames", MCFACILITYNAMES, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("LanguageNames", MCLANGUAGENAMES, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("MessageId", MCMESSAGEID, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("Severity", MCSEVERITY, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("Facility", MCFACILITY, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("SymbolicName", MCSYMBOLICNAME, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("Language", MCLANGUAGE, "keyword", 0, ((void*)0));
      mc_add_keyword_ascii ("Success", MCTOKEN, "severity", 0, ((void*)0));
      mc_add_keyword_ascii ("Informational", MCTOKEN, "severity", 1, ((void*)0));
      mc_add_keyword_ascii ("Warning", MCTOKEN, "severity", 2, ((void*)0));
      mc_add_keyword_ascii ("Error", MCTOKEN, "severity", 3, ((void*)0));
      mc_add_keyword_ascii ("System", MCTOKEN, "facility", 0xff, ((void*)0));
      mc_add_keyword_ascii ("Application", MCTOKEN, "facility", 0xfff, ((void*)0));
      mc_add_keyword_ascii ("English", MCTOKEN, "language", 0x409, "MSG00001");
  }
  k = keyword_top;
  if (!len || !t || *t == 0)
    return -1;
  while (k != ((void*)0))
    {
      if (k->len > len)
 break;
      if (k->len == len)
 {
   if (! memcmp (k->usz, t, len * sizeof (unichar)))
     {
       if (k->rid == MCTOKEN)
  yylval.tok = k;
       return k->rid;
     }
 }
      k = k->next;
    }
  return -1;
}
