
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct privhead {scalar_t__ ver_major; scalar_t__ ver_minor; scalar_t__ logical_disk_start; scalar_t__ logical_disk_size; scalar_t__ config_start; scalar_t__ config_size; int disk_id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2 (const struct privhead *VAR_1,
       const struct privhead *VAR_2)
{
 FUNC_0 (!VAR_1 || !VAR_2);

 return ((VAR_1->ver_major == VAR_2->ver_major) &&
  (VAR_1->ver_minor == VAR_2->ver_minor) &&
  (VAR_1->logical_disk_start == VAR_2->logical_disk_start) &&
  (VAR_1->logical_disk_size == VAR_2->logical_disk_size) &&
  (VAR_1->config_start == VAR_2->config_start) &&
  (VAR_1->config_size == VAR_2->config_size) &&
  !FUNC_1 (VAR_1->disk_id, VAR_2->disk_id, VAR_0));
}
