
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_master {int unique_len; int unique_size; int * unique; } ;
struct drm_device {TYPE_1__* driver; } ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *,int,char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_4, struct drm_master *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_5->unique_len = 13 + FUNC_3(VAR_4->driver->name);
 VAR_5->unique_size = VAR_5->unique_len;
 VAR_5->unique = FUNC_1(VAR_5->unique_len + 1, VAR_0, VAR_3);

 if (VAR_5->unique == ((void*)0))
  return -VAR_2;

 VAR_8 = 0;




 if (VAR_8 == -1)
  VAR_8 = 0;

 VAR_6 = FUNC_2(VAR_5->unique, VAR_5->unique_len,
   "platform:%s:%02d", VAR_4->driver->name, VAR_8);

 if (VAR_6 > VAR_5->unique_len) {
  FUNC_0("Unique buffer overflowed\n");
  VAR_7 = -VAR_1;
  goto err;
 }

 return 0;
err:
 return VAR_7;
}
