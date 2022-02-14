
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct virtchnl_version_info {int minor; int major; } ;
struct ixl_vf {int version; } ;
struct ixl_pf {int dummy; } ;
typedef int reply ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_1 (struct ixl_pf*,struct ixl_vf*,int ,int ,struct virtchnl_version_info*,int) ;

__attribute__((used)) static void
FUNC_2(struct ixl_pf *VAR_5, struct ixl_vf *VAR_6, void *VAR_7,
    uint16_t VAR_8)
{
 struct virtchnl_version_info VAR_9;

 if (VAR_8 != sizeof(struct virtchnl_version_info)) {
  FUNC_0(VAR_5, VAR_6, VAR_2,
      VAR_0);
  return;
 }

 VAR_6->version = ((struct virtchnl_version_info *)VAR_7)->minor;

 VAR_9.major = VAR_3;
 VAR_9.minor = VAR_4;
 FUNC_1(VAR_5, VAR_6, VAR_2, VAR_1, &VAR_9,
     sizeof(VAR_9));
}
