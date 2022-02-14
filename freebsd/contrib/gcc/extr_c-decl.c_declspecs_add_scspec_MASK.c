
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_declspecs {int declspecs_seen_p; int inline_p; int thread_p; int storage_class; scalar_t__ non_sc_seen_p; } ;
typedef enum rid { ____Placeholder_rid } rid ;
typedef enum c_storage_class { ____Placeholder_c_storage_class } c_storage_class ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;







 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,int ) ;

struct c_declspecs *
FUNC_7 (struct c_declspecs *VAR_9, tree VAR_10)
{
  enum rid VAR_11;
  enum c_storage_class VAR_12 = VAR_4;
  bool VAR_13 = 0;
  VAR_9->declspecs_seen_p = 1;
  FUNC_4 (FUNC_2 (VAR_10) == VAR_0
       && FUNC_0 (VAR_10));
  VAR_11 = FUNC_1 (VAR_10);
  if (VAR_8 && VAR_9->non_sc_seen_p)
    FUNC_6 (VAR_1, "%qE is not at beginning of declaration", VAR_10);
  switch (VAR_11)
    {
    case 132:




      VAR_13 = 0;
      VAR_9->inline_p = 1;
      break;
    case 129:
      VAR_13 = VAR_9->thread_p;
      if (VAR_9->storage_class == VAR_2)
 FUNC_3 ("%<__thread%> used with %<auto%>");
      else if (VAR_9->storage_class == VAR_5)
 FUNC_3 ("%<__thread%> used with %<register%>");
      else if (VAR_9->storage_class == VAR_7)
 FUNC_3 ("%<__thread%> used with %<typedef%>");
      else
 VAR_9->thread_p = 1;
      break;
    case 134:
      VAR_12 = VAR_2;
      break;
    case 133:
      VAR_12 = VAR_3;

      if (VAR_9->thread_p)
 FUNC_3 ("%<__thread%> before %<extern%>");
      break;
    case 131:
      VAR_12 = VAR_5;
      break;
    case 130:
      VAR_12 = VAR_6;

      if (VAR_9->thread_p)
 FUNC_3 ("%<__thread%> before %<static%>");
      break;
    case 128:
      VAR_12 = VAR_7;
      break;
    default:
      FUNC_5 ();
    }
  if (VAR_12 != VAR_4 && VAR_12 == VAR_9->storage_class)
    VAR_13 = 1;
  if (VAR_13)
    FUNC_3 ("duplicate %qE", VAR_10);
  if (VAR_12 != VAR_4)
    {
      if (VAR_9->storage_class != VAR_4 && VAR_12 != VAR_9->storage_class)
 {
   FUNC_3 ("multiple storage classes in declaration specifiers");
 }
      else
 {
   VAR_9->storage_class = VAR_12;
   if (VAR_12 != VAR_3 && VAR_12 != VAR_6 && VAR_9->thread_p)
     {
       FUNC_3 ("%<__thread%> used with %qE", VAR_10);
       VAR_9->thread_p = 0;
     }
 }
    }
  return VAR_9;
}
