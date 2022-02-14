
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int master; scalar_t__ magic; } ;
struct drm_device {int dummy; } ;
struct drm_auth {scalar_t__ magic; } ;
typedef scalar_t__ drm_magic_t ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,struct drm_file*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct drm_device *VAR_1, void *VAR_2, struct drm_file *VAR_3)
{
 static drm_magic_t VAR_4 = 0;
 struct drm_auth *VAR_5 = VAR_2;


 if (VAR_3->magic) {
  VAR_5->magic = VAR_3->magic;
 } else {
  do {
   FUNC_3(&VAR_0);
   if (!VAR_4)
    ++VAR_4;
   VAR_5->magic = VAR_4++;
   FUNC_4(&VAR_0);
  } while (FUNC_2(VAR_3->master, VAR_5->magic));
  VAR_3->magic = VAR_5->magic;
  FUNC_1(VAR_3->master, VAR_3, VAR_5->magic);
 }

 FUNC_0("%u\n", VAR_5->magic);

 return 0;
}
