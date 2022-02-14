
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_master {int magicfree; int magiclist; TYPE_1__* minor; } ;
struct TYPE_4__ {unsigned long key; } ;
struct drm_magic_entry {int head; TYPE_2__ hash_item; struct drm_file* priv; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
typedef scalar_t__ drm_magic_t ;
struct TYPE_3__ {struct drm_device* dev; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 struct drm_magic_entry* FUNC_5 (int,int ,int) ;

__attribute__((used)) static int FUNC_6(struct drm_master *VAR_4, struct drm_file *VAR_5,
    drm_magic_t VAR_6)
{
 struct drm_magic_entry *VAR_7;
 struct drm_device *VAR_8 = VAR_4->minor->dev;
 FUNC_0("%d\n", VAR_6);

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_0, VAR_3 | VAR_2);
 if (!VAR_7)
  return -VAR_1;
 VAR_7->priv = VAR_5;
 VAR_7->hash_item.key = (unsigned long)VAR_6;
 FUNC_1(VAR_8);
 FUNC_3(&VAR_4->magiclist, &VAR_7->hash_item);
 FUNC_4(&VAR_7->head, &VAR_4->magicfree);
 FUNC_2(VAR_8);

 return 0;
}
