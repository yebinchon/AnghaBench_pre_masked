
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int threadref ;
struct remote_state {int remote_packet_size; } ;
struct gdb_ext_thread_info {char* display; char* shortname; char* more_display; int active; int threadid; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 struct remote_state* FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *) ;
 char* FUNC_4 (char*,int*) ;
 char* FUNC_5 (char*,...) ;
 char* FUNC_6 (char*,char*,int) ;
 char* FUNC_7 (char*,int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9 (char *VAR_5, threadref *VAR_6,
        struct gdb_ext_thread_info *VAR_7)
{
  struct remote_state *VAR_8 = FUNC_1 ();
  int VAR_9, VAR_10;
  unsigned int VAR_11;
  threadref VAR_12;
  char *VAR_13 = VAR_5 + (VAR_8->remote_packet_size);
  int VAR_14 = 1;


  VAR_7->active = 0;
  VAR_7->display[0] = '\0';
  VAR_7->shortname[0] = '\0';
  VAR_7->more_display[0] = '\0';


  VAR_5 = FUNC_5 (VAR_5, &VAR_9);
  VAR_5 = FUNC_7 (VAR_5, &VAR_12);

  if (VAR_9 == 0)
    FUNC_8 ("Incomplete response to threadinfo request\n");
  if (!FUNC_3 (&VAR_12, VAR_6))
    {
      FUNC_8 ("ERROR RMT Thread info mismatch\n");
      return 0;
    }
  FUNC_0 (&VAR_7->threadid, &VAR_12);



  while ((VAR_5 < VAR_13) && VAR_9 && *VAR_5)
    {
      VAR_5 = FUNC_5 (VAR_5, &VAR_11);
      VAR_5 = FUNC_4 (VAR_5, &VAR_10);
      if (!(VAR_11 & VAR_9))
 {
   FUNC_8 ("ERROR RMT: threadinfo tag mismatch\n");
   VAR_14 = 0;
   break;
 }
      if (VAR_11 == VAR_3)
 {
   if (VAR_10 != 16)
     {
       FUNC_8 ("ERROR RMT: length of threadid is not 16\n");
       VAR_14 = 0;
       break;
     }
   VAR_5 = FUNC_7 (VAR_5, &VAR_12);
   VAR_9 = VAR_9 & ~VAR_3;
   continue;
 }
      if (VAR_11 == VAR_1)
 {
   VAR_7->active = FUNC_2 (VAR_5, VAR_10);
   VAR_5 += VAR_10;
   VAR_9 = VAR_9 & ~(VAR_1);
   if (VAR_10 > 8)
     {
       FUNC_8 ("ERROR RMT: 'exists' length too long\n");
       VAR_14 = 0;
       break;
     }
   continue;
 }
      if (VAR_11 == VAR_4)
 {
   VAR_5 = FUNC_6 (VAR_5, &VAR_7->shortname[0], VAR_10);
   VAR_9 = VAR_9 & ~VAR_4;
   continue;
 }
      if (VAR_11 == VAR_0)
 {
   VAR_5 = FUNC_6 (VAR_5, &VAR_7->display[0], VAR_10);
   VAR_9 = VAR_9 & ~VAR_0;
   continue;
 }
      if (VAR_11 == VAR_2)
 {
   VAR_5 = FUNC_6 (VAR_5, &VAR_7->more_display[0], VAR_10);
   VAR_9 = VAR_9 & ~VAR_2;
   continue;
 }
      FUNC_8 ("ERROR RMT: unknown thread info tag\n");
      break;
    }
  return VAR_14;
}
