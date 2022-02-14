
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_in*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,int*,int*,int*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_5 (struct sockaddr_in *VAR_1, const char *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    if (FUNC_4 (VAR_2, "%d,%d,%d,%d,%d,%d",
  &VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8) != 6) {
 FUNC_3 ("Passive mode address scan failure. "
  "Shouldn't happen!\n");
 return -1;
    }
    if (VAR_3 < 0 || VAR_3 > 255 ||
 VAR_4 < 0 || VAR_4 > 255 ||
 VAR_5 < 0 || VAR_5 > 255 ||
 VAR_6 < 0 || VAR_6 > 255 ||
 VAR_7 < 0 || VAR_7 > 255 ||
 VAR_8 < 0 || VAR_8 > 255) {
 FUNC_3 ("Can't parse passive mode string.\n");
 return -1;
    }
    FUNC_2 (VAR_1, 0, sizeof(*VAR_1));
    VAR_1->sin_family = VAR_0;
    VAR_1->sin_addr.s_addr = FUNC_0 ((VAR_3 << 24) | (VAR_4 << 16) |
      (VAR_5 << 8) | VAR_6);
    VAR_1->sin_port = FUNC_1 ((VAR_7 << 8) | VAR_8);
    return 0;
}
