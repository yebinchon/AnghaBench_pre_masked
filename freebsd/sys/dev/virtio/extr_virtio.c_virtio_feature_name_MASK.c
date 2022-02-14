
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct virtio_feature_desc {scalar_t__ vfd_val; char const* vfd_str; } ;


 struct virtio_feature_desc* VAR_0 ;

__attribute__((used)) static const char *
FUNC_0(uint64_t VAR_1, struct virtio_feature_desc *VAR_2)
{
 int VAR_3, VAR_4;
 struct virtio_feature_desc *VAR_5[2] = { VAR_2,
     VAR_0 };

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  if (VAR_5[VAR_3] == ((void*)0))
   continue;

  for (VAR_4 = 0; VAR_5[VAR_3][VAR_4].vfd_val != 0; VAR_4++) {
   if (VAR_1 == VAR_5[VAR_3][VAR_4].vfd_val)
    return (VAR_5[VAR_3][VAR_4].vfd_str);
  }
 }

 return (((void*)0));
}
