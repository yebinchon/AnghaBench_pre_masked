
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_int ;
struct winsize {void* ws_ypixel; void* ws_xpixel; void* ws_col; void* ws_row; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct winsize*) ;

void
FUNC_1(int VAR_1, u_int VAR_2, u_int VAR_3,
 u_int VAR_4, u_int VAR_5)
{
 struct winsize VAR_6;


 VAR_6.ws_row = VAR_2;
 VAR_6.ws_col = VAR_3;
 VAR_6.ws_xpixel = VAR_4;
 VAR_6.ws_ypixel = VAR_5;
 (void) FUNC_0(VAR_1, VAR_0, &VAR_6);
}
