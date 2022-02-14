
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {TYPE_1__* comm_page; } ;
struct TYPE_2__ {int status_clocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(const struct echoaudio *VAR_3)
{
 u32 VAR_4, VAR_5;



 VAR_4 = FUNC_0(VAR_3->comm_page->status_clocks);

 VAR_5 = VAR_0;

 if (VAR_4 & VAR_2)
  VAR_5 |= VAR_1;

 return VAR_5;
}
