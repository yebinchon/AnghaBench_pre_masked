
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hast_resource {scalar_t__ hr_role; scalar_t__ hr_replication; scalar_t__ hr_checksum; scalar_t__ hr_compression; scalar_t__ hr_timeout; scalar_t__ hr_metaflush; int hr_exec; int hr_sourceaddr; int hr_remoteaddr; int hr_localpath; int hr_provname; int hr_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static bool
FUNC_2(const struct hast_resource *VAR_1,
    const struct hast_resource *VAR_2)
{

 FUNC_0(FUNC_1(VAR_1->hr_name, VAR_2->hr_name) == 0);
 FUNC_0(FUNC_1(VAR_1->hr_provname, VAR_2->hr_provname) == 0);
 FUNC_0(FUNC_1(VAR_1->hr_localpath, VAR_2->hr_localpath) == 0);

 if (VAR_1->hr_role != VAR_0)
  return (0);

 if (FUNC_1(VAR_1->hr_remoteaddr, VAR_2->hr_remoteaddr) != 0)
  return (1);
 if (FUNC_1(VAR_1->hr_sourceaddr, VAR_2->hr_sourceaddr) != 0)
  return (1);
 if (VAR_1->hr_replication != VAR_2->hr_replication)
  return (1);
 if (VAR_1->hr_checksum != VAR_2->hr_checksum)
  return (1);
 if (VAR_1->hr_compression != VAR_2->hr_compression)
  return (1);
 if (VAR_1->hr_timeout != VAR_2->hr_timeout)
  return (1);
 if (FUNC_1(VAR_1->hr_exec, VAR_2->hr_exec) != 0)
  return (1);
 if (VAR_1->hr_metaflush != VAR_2->hr_metaflush)
  return (1);
 return (0);
}
