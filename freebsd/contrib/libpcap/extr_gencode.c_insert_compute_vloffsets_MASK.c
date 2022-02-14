
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int k; } ;
struct slist {TYPE_3__ s; } ;
struct block {struct slist* stmts; } ;
struct TYPE_17__ {int reg; } ;
struct TYPE_15__ {int reg; } ;
struct TYPE_14__ {int reg; scalar_t__ is_variable; } ;
struct TYPE_18__ {int outermostlinktype; TYPE_4__ off_linktype; TYPE_2__ off_linkpl; scalar_t__ is_vlan_vloffset; TYPE_1__ off_linkhdr; } ;
typedef TYPE_5__ compiler_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 void* FUNC_0 (TYPE_5__*) ;
 struct slist* FUNC_1 (TYPE_5__*,struct slist*,struct slist*) ;
 struct slist* FUNC_2 (TYPE_5__*) ;
 struct slist* FUNC_3 (TYPE_5__*) ;
 struct slist* FUNC_4 (TYPE_5__*) ;
 struct slist* FUNC_5 (TYPE_5__*) ;
 struct slist* FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (struct slist*,struct slist*) ;

__attribute__((used)) static void
FUNC_8(compiler_state_t *VAR_4, struct block *VAR_5)
{
 struct slist *VAR_6;






 if (VAR_4->off_linkpl.reg != -1 && VAR_4->off_linkhdr.is_variable &&
     VAR_4->off_linkhdr.reg == -1)
  VAR_4->off_linkhdr.reg = FUNC_0(VAR_4);
 switch (VAR_4->outermostlinktype) {

 case 128:
  VAR_6 = FUNC_4(VAR_4);
  break;

 case 130:
  VAR_6 = FUNC_2(VAR_4);
  break;

 case 131:
  VAR_6 = FUNC_5(VAR_4);
  break;

 case 129:
  VAR_6 = FUNC_3(VAR_4);
  break;

 default:
  VAR_6 = ((void*)0);
  break;
 }






 switch (VAR_4->outermostlinktype) {

 case 132:
 case 128:
 case 130:
 case 131:
 case 129:
  VAR_6 = FUNC_1(VAR_4, VAR_6, VAR_5->stmts);
  break;
 }





 if (VAR_6 == ((void*)0) && VAR_4->is_vlan_vloffset) {
  struct slist *VAR_7;

  if (VAR_4->off_linkpl.reg == -1)
   VAR_4->off_linkpl.reg = FUNC_0(VAR_4);
  if (VAR_4->off_linktype.reg == -1)
   VAR_4->off_linktype.reg = FUNC_0(VAR_4);

  VAR_6 = FUNC_6(VAR_4, VAR_1|VAR_3|VAR_0);
  VAR_6->s.k = 0;
  VAR_7 = FUNC_6(VAR_4, VAR_2);
  VAR_7->s.k = VAR_4->off_linkpl.reg;
  FUNC_7(VAR_6, VAR_7);
  VAR_7 = FUNC_6(VAR_4, VAR_2);
  VAR_7->s.k = VAR_4->off_linktype.reg;
  FUNC_7(VAR_6, VAR_7);
 }







 if (VAR_6 != ((void*)0)) {
  FUNC_7(VAR_6, VAR_5->stmts);
  VAR_5->stmts = VAR_6;
 }
}
