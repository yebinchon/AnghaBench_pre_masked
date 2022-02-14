
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;
struct remote_state {int remote_packet_size; } ;


 int VAR_0 ;
 struct remote_state* FUNC_0 () ;
 char* FUNC_1 (char*,int*) ;
 char* FUNC_2 (char*,int*) ;
 char* FUNC_3 (char*,int *) ;

__attribute__((used)) static int
FUNC_4 (char *VAR_1, int VAR_2,
      threadref *VAR_3, threadref *VAR_4,
      int *VAR_5)
{
  struct remote_state *VAR_6 = FUNC_0 ();
  char *VAR_7;
  int VAR_8, VAR_9, VAR_10;

  VAR_9 = 0;

  VAR_7 = VAR_1 + ((VAR_6->remote_packet_size) - VAR_0);
  VAR_1 = FUNC_1 (VAR_1, &VAR_8);
  VAR_1 = FUNC_2 (VAR_1, &VAR_10);

  VAR_1 = FUNC_3 (VAR_1, VAR_3);
  while ((VAR_8-- > 0) && (VAR_1 < VAR_7))
    {
      VAR_1 = FUNC_3 (VAR_1, VAR_4++);
      if (VAR_9++ >= VAR_2)
 break;
    }
  if (VAR_5)
    *VAR_5 = VAR_10;
  return VAR_9;
}
