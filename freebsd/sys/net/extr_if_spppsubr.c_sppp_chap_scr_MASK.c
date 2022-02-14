
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef scalar_t__ u_char ;
struct TYPE_2__ {int name; scalar_t__ challenge; } ;
struct sppp {TYPE_1__ myauth; scalar_t__* confid; scalar_t__* pp_seq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int FUNC_1 (int *,struct sppp*,int ,scalar_t__,int,char const*,size_t,scalar_t__,size_t,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct sppp *VAR_5)
{
 u_long *VAR_6;
 u_char VAR_7;


 VAR_6 = (u_long *)VAR_5->myauth.challenge;
 FUNC_0(VAR_6, 4 * sizeof(*VAR_6));
 VAR_7 = VAR_0;

 VAR_5->confid[VAR_3] = ++VAR_5->pp_seq[VAR_3];

 FUNC_1(&VAR_4, VAR_5, VAR_2, VAR_5->confid[VAR_3],
         sizeof VAR_7, (const char *)&VAR_7,
         (size_t)VAR_0, VAR_5->myauth.challenge,
         (size_t)FUNC_2(VAR_5->myauth.name, VAR_1),
         VAR_5->myauth.name,
         0);
}
