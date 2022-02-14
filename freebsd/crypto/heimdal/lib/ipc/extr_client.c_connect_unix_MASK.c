
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct path_ctx {scalar_t__ fd; int path; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,struct sockaddr*,int) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct path_ctx *VAR_3)
{
    struct sockaddr_un VAR_4;

    VAR_4.sun_family = VAR_0;
    FUNC_4(VAR_4.sun_path, VAR_3->path, sizeof(VAR_4.sun_path));

    VAR_3->fd = FUNC_3(VAR_0, VAR_1, 0);
    if (VAR_3->fd < 0)
 return VAR_2;
    FUNC_2(VAR_3->fd);

    if (FUNC_1(VAR_3->fd, (struct sockaddr *)&VAR_4, sizeof(VAR_4)) != 0) {
 FUNC_0(VAR_3->fd);
 return VAR_2;
    }

    return 0;
}
