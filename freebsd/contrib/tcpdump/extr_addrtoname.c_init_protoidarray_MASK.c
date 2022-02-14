
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_char ;
struct protoidmem {int * p_name; } ;
struct protoidlist {int * name; scalar_t__* protoid; } ;
struct TYPE_6__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;
struct TYPE_7__ {scalar_t__ s; int p; } ;


 TYPE_5__* VAR_0 ;
 int FUNC_0 (int ) ;
 struct protoidmem* FUNC_1 (TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (char*,char*,int) ;
 struct protoidlist* VAR_1 ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_2)
{
 register int VAR_3;
 register struct protoidmem *VAR_4;
 const struct protoidlist *VAR_5;
 u_char VAR_6[5];

 VAR_6[0] = 0;
 VAR_6[1] = 0;
 VAR_6[2] = 0;
 for (VAR_3 = 0; VAR_0[VAR_3].s; VAR_3++) {
  u_short VAR_7 = FUNC_0(VAR_0[VAR_3].p);

  FUNC_2((char *)&VAR_6[3], (char *)&VAR_7, 2);
  VAR_4 = FUNC_1(VAR_2, VAR_6);
  VAR_4->p_name = FUNC_3(VAR_0[VAR_3].s);
  if (VAR_4->p_name == ((void*)0))
   (*VAR_2->ndo_error)(VAR_2,
       "init_protoidarray: strdup(eproto_db[i].s)");
 }

 for (VAR_5 = VAR_1; VAR_5->name != ((void*)0); ++VAR_5) {
  VAR_4 = FUNC_1(VAR_2, VAR_5->protoid);

  if (VAR_4->p_name != ((void*)0))
   continue;

  VAR_4->p_name = VAR_5->name;
 }
}
