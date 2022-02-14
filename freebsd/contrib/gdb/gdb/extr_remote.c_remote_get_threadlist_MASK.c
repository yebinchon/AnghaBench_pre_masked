
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;
struct remote_state {int remote_packet_size; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 struct remote_state* FUNC_1 () ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char*,int,int *,int *,int*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8 (int VAR_1, threadref *VAR_2, int VAR_3,
         int *VAR_4, int *VAR_5, threadref *VAR_6)
{
  struct remote_state *VAR_7 = FUNC_1 ();
  static threadref VAR_8;
  char *VAR_9 = FUNC_0 (VAR_7->remote_packet_size);
  char *VAR_10 = FUNC_0 (VAR_7->remote_packet_size);
  int VAR_11 = 1;


  if ((((VAR_3 + 1) * VAR_0) + 10) >= (VAR_7->remote_packet_size))
    VAR_3 = ((VAR_7->remote_packet_size) / VAR_0) - 2;

  FUNC_3 (VAR_9,
      VAR_1, VAR_3, VAR_2);
  FUNC_5 (VAR_9);
  FUNC_2 (VAR_10, (VAR_7->remote_packet_size), 0);

  *VAR_5 =
    FUNC_4 (VAR_10 + 2, VAR_3, &VAR_8,
          VAR_6, VAR_4);

  if (!FUNC_6 (&VAR_8, VAR_2))
    {
      FUNC_7 ("HMM: threadlist did not echo arg thread, dropping it\n");
      return 0;
    }
  if (*VAR_5 <= 0)
    {
      if (*VAR_4 != 1)
 {
   FUNC_7 ("RMT ERROR : failed to get remote thread list\n");
   VAR_11 = 0;
 }
      return VAR_11;
    }
  if (*VAR_5 > VAR_3)
    {
      *VAR_5 = 0;
      FUNC_7 ("RMT ERROR: threadlist response longer than requested\n");
      return 0;
    }
  return VAR_11;
}
