
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifdrv {size_t ifd_len; void* ifd_data; int ifd_cmd; int ifd_name; } ;
typedef int ifd ;
struct TYPE_2__ {int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int,int ,struct ifdrv*) ;
 int FUNC_1 (struct ifdrv*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, u_long VAR_4, void *VAR_5, size_t VAR_6, int VAR_7)
{
 struct ifdrv VAR_8;

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));

 FUNC_2(VAR_8.ifd_name, VAR_2.ifr_name, sizeof(VAR_8.ifd_name));
 VAR_8.ifd_cmd = VAR_4;
 VAR_8.ifd_len = VAR_6;
 VAR_8.ifd_data = VAR_5;

 return (FUNC_0(VAR_3, VAR_7 ? VAR_1 : VAR_0, &VAR_8));
}
