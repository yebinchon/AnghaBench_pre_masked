
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned short const) ;
 int FUNC_2 (int const,int const,unsigned short const,unsigned short const) ;
 int FUNC_3 (int const,int const,struct sockaddr const*,char const*) ;

__attribute__((used)) static int FUNC_4(const u32 VAR_6, const u32 VAR_7,
    const unsigned short VAR_8,
    const unsigned short VAR_9)
{
 const struct sockaddr_in VAR_10 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_0(VAR_3),
  .sin_port = FUNC_1(VAR_9),
 };
 const char *VAR_11;
 int VAR_12;

 switch (VAR_8) {
 case 128:
  VAR_11 = VAR_5;
  break;
 case 129:
  VAR_11 = VAR_4;
  break;
 default:
  return -VAR_1;
 }

 VAR_12 = FUNC_3(VAR_6, VAR_7,
     (const struct sockaddr *)&VAR_10, VAR_11);





 if (VAR_12 == -VAR_2)
  VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9);

 return VAR_12;
}
