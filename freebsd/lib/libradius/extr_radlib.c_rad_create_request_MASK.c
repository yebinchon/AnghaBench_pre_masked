
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_char ;
struct rad_handle {scalar_t__ type; scalar_t__ num_servers; int* out; int ident; int out_created; scalar_t__ authentic_pos; int out_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rad_handle*) ;
 int FUNC_1 (struct rad_handle*,char*) ;
 int FUNC_2 (int*,int ,int) ;
 long FUNC_3 () ;

int
FUNC_4(struct rad_handle *VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_7->type == VAR_5) {
  FUNC_1(VAR_7, "denied function call");
  return (-1);
 }
 if (VAR_7->num_servers == 0) {
      FUNC_1(VAR_7, "No RADIUS servers specified");
  return (-1);
 }
 VAR_7->out[VAR_3] = VAR_8;
 VAR_7->out[VAR_4] = ++VAR_7->ident;
 if (VAR_8 == VAR_6) {

  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9 += 2) {
   long VAR_10;
   VAR_10 = FUNC_3();
   VAR_7->out[VAR_2+VAR_9] = (u_char)VAR_10;
   VAR_7->out[VAR_2+VAR_9+1] = (u_char)(VAR_10 >> 8);
  }
 } else
  FUNC_2(&VAR_7->out[VAR_2], 0, VAR_0);
 VAR_7->out_len = VAR_1;
 FUNC_0(VAR_7);
 VAR_7->authentic_pos = 0;
 VAR_7->out_created = 1;
 return 0;
}
