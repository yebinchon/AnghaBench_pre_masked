
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_2__ {int secret; int name; } ;
struct sppp {TYPE_1__ myauth; scalar_t__* confid; scalar_t__* pp_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct sppp*,int ,scalar_t__,int,char const*,size_t,int ,int,char const*,size_t,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct sppp *VAR_5)
{
 u_char VAR_6, VAR_7;

 VAR_5->confid[VAR_2] = ++VAR_5->pp_seq[VAR_2];
 VAR_7 = FUNC_1(VAR_5->myauth.secret, VAR_0);
 VAR_6 = FUNC_1(VAR_5->myauth.name, VAR_1);

 FUNC_0(&VAR_4, VAR_5, VAR_3, VAR_5->confid[VAR_2],
         sizeof VAR_6, (const char *)&VAR_6,
         (size_t)VAR_6, VAR_5->myauth.name,
         sizeof VAR_7, (const char *)&VAR_7,
         (size_t)VAR_7, VAR_5->myauth.secret,
         0);
}
