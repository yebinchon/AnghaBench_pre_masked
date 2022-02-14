
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_var {int (* ev_sethook ) (struct env_var*,int,void const*) ;char* ev_value; int ev_flags; struct env_var* ev_prev; struct env_var* ev_next; void* ev_name; int ev_unsethook; } ;
typedef int ev_unsethook_t ;
typedef int (* ev_sethook_t ) (struct env_var*,int,void const*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct env_var* FUNC_0 (char const*) ;
 struct env_var* VAR_3 ;
 int FUNC_1 (char*) ;
 struct env_var* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 void* FUNC_4 (void const*) ;
 int FUNC_5 (struct env_var*,int,void const*) ;

int
FUNC_6(const char *VAR_4, int VAR_5, const void *VAR_6,
    ev_sethook_t VAR_7, ev_unsethook_t VAR_8)
{
    struct env_var *VAR_9, *VAR_10, *VAR_11;

    if ((VAR_9 = FUNC_0(VAR_4)) != ((void*)0)) {




 if ((VAR_9->ev_sethook != ((void*)0)) && !(VAR_5 & VAR_1))
     return (VAR_9->ev_sethook(VAR_9, VAR_5, VAR_6));


 if (VAR_9->ev_value != ((void*)0) && (VAR_9->ev_flags & VAR_0) != 0)
     FUNC_1(VAR_9->ev_value);
 VAR_9->ev_value = ((void*)0);
 VAR_9->ev_flags &= ~VAR_0;

    } else {




 VAR_9 = FUNC_2(sizeof(struct env_var));
 VAR_9->ev_name = FUNC_4(VAR_4);
 VAR_9->ev_value = ((void*)0);
 VAR_9->ev_flags = 0;

 VAR_9->ev_sethook = VAR_7;
 VAR_9->ev_unsethook = VAR_8;


 VAR_9->ev_prev = ((void*)0);
 VAR_9->ev_next = ((void*)0);

 for (VAR_11 = ((void*)0), VAR_10 = VAR_3;
      VAR_10 != ((void*)0);
      VAR_11 = VAR_10, VAR_10 = VAR_10->ev_next) {

     if (FUNC_3(VAR_9->ev_name, VAR_10->ev_name) < 0) {
  if (VAR_10->ev_prev) {
      VAR_10->ev_prev->ev_next = VAR_9;
  } else {
      VAR_3 = VAR_9;
  }
  VAR_9->ev_next = VAR_10;
  VAR_9->ev_prev = VAR_10->ev_prev;
  VAR_10->ev_prev = VAR_9;
  break;
     }
 }
 if (VAR_10 == ((void*)0)) {
     if (VAR_11 == ((void*)0)) {
  VAR_3 = VAR_9;
     } else {
  VAR_11->ev_next = VAR_9;
  VAR_9->ev_prev = VAR_11;
     }
 }
    }


    if (VAR_5 & VAR_2) {
 VAR_9->ev_value = FUNC_4(VAR_6);
 VAR_9->ev_flags |= VAR_0;
    } else {
 VAR_9->ev_value = (char *)VAR_6;
 VAR_9->ev_flags |= VAR_5 & VAR_0;
    }

    return(0);
}
