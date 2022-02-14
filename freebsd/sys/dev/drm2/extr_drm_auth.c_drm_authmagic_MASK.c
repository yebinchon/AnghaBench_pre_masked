
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int authenticated; int master; } ;
struct drm_device {int dummy; } ;
struct drm_auth {int magic; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 struct drm_file* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 struct drm_auth *VAR_4 = VAR_2;
 struct drm_file *VAR_5;

 FUNC_0("%u\n", VAR_4->magic);
 if ((VAR_5 = FUNC_1(VAR_3->master, VAR_4->magic))) {
  VAR_5->authenticated = 1;
  FUNC_2(VAR_3->master, VAR_4->magic);
  return 0;
 }
 return -VAR_0;
}
