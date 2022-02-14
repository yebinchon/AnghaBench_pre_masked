
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct remote_state {int remote_packet_size; } ;
typedef enum target_object { ____Placeholder_target_object } target_object ;
typedef int ULONGEST ;
struct TYPE_4__ {int support; } ;
typedef int LONGEST ;


 int VAR_0 ;
 int VAR_1 ;




 char* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 struct remote_state* FUNC_3 () ;
 int FUNC_4 (void*,int,int ) ;
 int FUNC_5 (char*,void*,int) ;
 scalar_t__ FUNC_6 (char const) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*,TYPE_1__*) ;
 char* FUNC_9 (int,int) ;
 int FUNC_10 (char*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_11 (char*,int,char*,...) ;
 int FUNC_12 (void*) ;

__attribute__((used)) static LONGEST
FUNC_13 (struct target_ops *VAR_5, enum target_object VAR_6,
       const char *VAR_7, void *VAR_8, const void *VAR_9,
       ULONGEST VAR_10, LONGEST VAR_11)
{
  struct remote_state *VAR_12 = FUNC_3 ();
  int VAR_13;
  char *VAR_14 = FUNC_0 (VAR_12->remote_packet_size);
  char *VAR_15 = &VAR_14[0];
  char VAR_16;


  if (VAR_9 != ((void*)0) || VAR_8 == ((void*)0))
    return -1;



  switch (VAR_6)
    {
    case 128:
      VAR_16 = 'K';
      break;
    case 130:
      VAR_16 = 'R';
      break;

    case 131:
      if (VAR_3.support != VAR_0)
 {
   unsigned int VAR_17 = 0;
   while (VAR_11 > 0)
     {
       LONGEST VAR_18 = FUNC_7 ((VAR_12->remote_packet_size - 2) / 2, VAR_11);
       FUNC_11 (VAR_14, VAR_12->remote_packet_size,
   "qPart:auxv:read::%s,%s",
   FUNC_9 (VAR_10, sizeof VAR_10),
   FUNC_9 (VAR_18, sizeof VAR_18));
       VAR_13 = FUNC_10 (VAR_14);
       if (VAR_13 < 0)
  return VAR_17 > 0 ? VAR_17 : VAR_13;
       VAR_14[0] = '\0';
       FUNC_4 (VAR_14, VAR_12->remote_packet_size, 0);
       if (FUNC_8 (VAR_14, &VAR_3) != VAR_1)
  return VAR_17 > 0 ? VAR_17 : -1;
       if (VAR_14[0] == 'O' && VAR_14[1] == 'K' && VAR_14[2] == '\0')
  break;

       VAR_13 = FUNC_5 (VAR_14, VAR_8, VAR_11);
       if (VAR_13 > 0)
  {
    VAR_8 = (void *) ((char *) VAR_8 + VAR_13);
    VAR_10 += VAR_13;
    VAR_11 -= VAR_13;
    VAR_17 += VAR_13;
  }
     }
   return VAR_17;
 }
      return -1;

    case 129:
      if (VAR_4.support != VAR_0)
 {
   FUNC_11 (VAR_14, VAR_12->remote_packet_size, "qPart:dirty:read::%lx",
      (long)(VAR_10 >> 3));
   VAR_13 = FUNC_10 (VAR_14);
   if (VAR_13 < 0)
     return VAR_13;
   VAR_14[0] = '\0';
   FUNC_4 (VAR_14, VAR_12->remote_packet_size, 0);
   if (FUNC_8 (VAR_14, &VAR_4) != VAR_1)
     return -1;
   VAR_13 = FUNC_5 (VAR_14, VAR_8, VAR_11);
   return VAR_13;
 }
      return -1;

    default:
      return -1;
    }



  if (VAR_10 == 0 && VAR_11 == 0)
    return (VAR_12->remote_packet_size);


  if (VAR_11 < (VAR_12->remote_packet_size))
    return -1;
  VAR_11 = VAR_12->remote_packet_size;


  if (!VAR_2)
    FUNC_1 ("remote query is only available after target open");

  FUNC_2 (VAR_7 != ((void*)0));
  FUNC_2 (VAR_8 != ((void*)0));

  *VAR_15++ = 'q';
  *VAR_15++ = VAR_16;





  VAR_13 = 0;
  while (VAR_7[VAR_13] && (VAR_13 < ((VAR_12->remote_packet_size) - 8)))
    {

      FUNC_2 (FUNC_6 (VAR_7[VAR_13]) && VAR_7[VAR_13] != '$' && VAR_7[VAR_13] != '#');
      *VAR_15++ = VAR_7[VAR_13];
      VAR_13++;
    }
  *VAR_15 = '\0';
  FUNC_2 (VAR_7[VAR_13] == '\0');

  VAR_13 = FUNC_10 (VAR_14);
  if (VAR_13 < 0)
    return VAR_13;

  FUNC_4 (VAR_8, VAR_11, 0);

  return FUNC_12 (VAR_8);
}
