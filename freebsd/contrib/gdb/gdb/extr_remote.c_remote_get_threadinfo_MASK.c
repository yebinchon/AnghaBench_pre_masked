
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;
struct remote_state {int remote_packet_size; } ;
struct gdb_ext_thread_info {int dummy; } ;


 char* FUNC_0 (int ) ;
 struct remote_state* FUNC_1 () ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int *,struct gdb_ext_thread_info*) ;

__attribute__((used)) static int
FUNC_6 (threadref *VAR_0, int VAR_1,
         struct gdb_ext_thread_info *VAR_2)
{
  struct remote_state *VAR_3 = FUNC_1 ();
  int VAR_4;
  char *VAR_5 = FUNC_0 (VAR_3->remote_packet_size);

  FUNC_3 (VAR_5, VAR_1, VAR_0);
  FUNC_4 (VAR_5);
  FUNC_2 (VAR_5, (VAR_3->remote_packet_size), 0);
  VAR_4 = FUNC_5 (VAR_5 + 2, VAR_0,
            VAR_2);
  return VAR_4;
}
