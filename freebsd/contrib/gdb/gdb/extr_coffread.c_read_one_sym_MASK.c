
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union internal_auxent {int dummy; } internal_auxent ;
struct internal_syment {int n_numaux; int n_sclass; scalar_t__ n_type; int n_scnum; int n_value; } ;
struct coff_symbol {int c_symnum; int c_naux; char* c_name; int c_sclass; unsigned int c_type; int c_value; int c_secnum; } ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int,int ,int,char*) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (struct coff_symbol*,int ) ;
 char* FUNC_5 (struct internal_syment*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_7 (struct coff_symbol *VAR_8,
       struct internal_syment *VAR_9,
       union internal_auxent *VAR_10)
{
  int VAR_11;

  VAR_8->c_symnum = VAR_5;
  FUNC_1 (VAR_7, VAR_1, VAR_2);
  FUNC_3 (VAR_4, VAR_7, (char *) VAR_9);
  VAR_8->c_naux = VAR_9->n_numaux & 0xff;
  if (VAR_8->c_naux >= 1)
    {
      FUNC_1 (VAR_6, VAR_0, VAR_2);
      FUNC_2 (VAR_4, VAR_6, VAR_9->n_type, VAR_9->n_sclass,
       0, VAR_8->c_naux, (char *) VAR_10);


      for (VAR_11 = 1; VAR_11 < VAR_8->c_naux; VAR_11++)
 FUNC_1 (VAR_6, VAR_0, VAR_2);
    }
  VAR_8->c_name = FUNC_5 (VAR_9);
  VAR_8->c_value = VAR_9->n_value;
  VAR_8->c_sclass = (VAR_9->n_sclass & 0xff);
  VAR_8->c_secnum = VAR_9->n_scnum;
  VAR_8->c_type = (unsigned) VAR_9->n_type;
  if (!FUNC_0 (VAR_8->c_type))
    VAR_8->c_type = 0;






  VAR_5 += 1 + VAR_8->c_naux;






  if (VAR_3)
    {
      switch (VAR_8->c_sclass)
 {
 case 138:
 case 132:
 case 131:
 case 134:
 case 135:
 case 133:
 case 129:
 case 128:
 case 136:
 case 130:
 case 140:
 case 137:
 case 139:
   if (VAR_8->c_secnum != 0)
     VAR_8->c_value += FUNC_4 (VAR_8, VAR_4);
   break;
 }
    }
}
