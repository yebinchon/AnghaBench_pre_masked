
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {int remote_packet_size; } ;
struct packet_reg {int regnum; int pnum; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 struct remote_state* FUNC_3 () ;
 struct packet_reg* FUNC_4 (struct remote_state*,int) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10 (int VAR_1)
{
  struct remote_state *VAR_2 = FUNC_3 ();
  struct packet_reg *VAR_3 = FUNC_4 (VAR_2, VAR_1);

  char *VAR_4 = FUNC_1 (VAR_2->remote_packet_size);
  char VAR_5[VAR_0];
  char *VAR_6;
  int VAR_7;

  FUNC_8 (VAR_4, "P%s=", FUNC_5 (VAR_3->pnum, 0));
  VAR_6 = VAR_4 + FUNC_9 (VAR_4);
  FUNC_6 (VAR_3->regnum, VAR_5);
  FUNC_2 (VAR_5, VAR_6, FUNC_0 (VAR_3->regnum));
  FUNC_7 (VAR_4, VAR_2->remote_packet_size);

  return VAR_4[0] != '\0';
}
