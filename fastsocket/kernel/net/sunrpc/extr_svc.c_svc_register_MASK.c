
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_serv {struct svc_program* sv_program; } ;
struct svc_program {unsigned int pg_nvers; int pg_prog; int pg_name; TYPE_1__** pg_vers; struct svc_program* pg_next; } ;
struct TYPE_2__ {scalar_t__ vs_hidden; } ;


 int FUNC_0 (int) ;
 unsigned short const VAR_0 ;
 int FUNC_1 (int ,int ,unsigned int,int const,unsigned short const,unsigned short const) ;
 int FUNC_2 (char*,int ,unsigned int,char*,unsigned short const,int const,char*) ;

int FUNC_3(const struct svc_serv *VAR_1, const int VAR_2,
   const unsigned short VAR_3, const unsigned short VAR_4)
{
 struct svc_program *VAR_5;
 unsigned int VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_3 == 0 && VAR_4 == 0);

 for (VAR_5 = VAR_1->sv_program; VAR_5; VAR_5 = VAR_5->pg_next) {
  for (VAR_6 = 0; VAR_6 < VAR_5->pg_nvers; VAR_6++) {
   if (VAR_5->pg_vers[VAR_6] == ((void*)0))
    continue;

   FUNC_2("svc: svc_register(%sv%d, %s, %u, %u)%s\n",
     VAR_5->pg_name,
     VAR_6,
     VAR_3 == VAR_0? "udp" : "tcp",
     VAR_4,
     VAR_2,
     VAR_5->pg_vers[VAR_6]->vs_hidden?
      " (but not telling portmap)" : "");

   if (VAR_5->pg_vers[VAR_6]->vs_hidden)
    continue;

   VAR_7 = FUNC_1(VAR_5->pg_name, VAR_5->pg_prog,
      VAR_6, VAR_2, VAR_3, VAR_4);
   if (VAR_7 < 0)
    break;
  }
 }

 return VAR_7;
}
