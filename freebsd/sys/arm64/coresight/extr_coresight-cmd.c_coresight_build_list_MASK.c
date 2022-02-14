
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coresight_event {int dummy; } ;
struct coresight_device {int dummy; } ;


 struct coresight_device* FUNC_0 (struct coresight_device*,struct coresight_event*) ;

__attribute__((used)) static int
FUNC_1(struct coresight_device *VAR_0,
    struct coresight_event *VAR_1)
{
 struct coresight_device *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0))
  VAR_2 = FUNC_0(VAR_2, VAR_1);

 return (0);
}
