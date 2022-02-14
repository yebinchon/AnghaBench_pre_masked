
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct p2p_group_info {size_t num_clients; struct p2p_client_info* client; } ;
struct p2p_client_info {int const* p2p_device_addr; int const* p2p_interface_addr; int const* pri_dev_type; int num_sec_dev_types; int const* sec_dev_types; char const* dev_name; int dev_name_len; scalar_t__ config_methods; int dev_capab; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_3 ;
 int FUNC_1 (struct p2p_group_info*,int ,int) ;

int FUNC_2(const u8 *VAR_4, size_t VAR_5,
    struct p2p_group_info *VAR_6)
{
 const u8 *VAR_7, *VAR_8;

 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 if (VAR_4 == ((void*)0))
  return 0;

 VAR_7 = VAR_4;
 VAR_8 = VAR_4 + VAR_5;
 while (VAR_7 < VAR_8) {
  struct p2p_client_info *VAR_9;
  const u8 *VAR_10;
  u16 VAR_11;
  u8 VAR_12;

  VAR_9 = &VAR_6->client[VAR_6->num_clients];
  VAR_12 = *VAR_7++;
  if (VAR_12 > VAR_8 - VAR_7 || VAR_12 < 2 * VAR_1 + 1 + 2 + 8 + 1)
   return -1;
  VAR_10 = VAR_7 + VAR_12;

  VAR_9->p2p_device_addr = VAR_7;
  VAR_7 += VAR_1;
  VAR_9->p2p_interface_addr = VAR_7;
  VAR_7 += VAR_1;
  VAR_9->dev_capab = *VAR_7++;

  VAR_9->config_methods = FUNC_0(VAR_7);
  VAR_7 += 2;
  VAR_9->pri_dev_type = VAR_7;
  VAR_7 += 8;


  VAR_12 = *VAR_7++;
  if (8 * VAR_12 > VAR_10 - VAR_7)
   return -1;
  VAR_9->num_sec_dev_types = VAR_12;
  VAR_9->sec_dev_types = VAR_7;
  VAR_7 += 8 * VAR_12;


  if (VAR_10 - VAR_7 < 2 + 2)
   return -1;
  if (FUNC_0(VAR_7) != VAR_0)
   return -1;
  VAR_7 += 2;
  VAR_11 = FUNC_0(VAR_7);
  VAR_7 += 2;
  if (VAR_11 > VAR_10 - VAR_7)
   return -1;
  if (VAR_11 >= VAR_3)
   VAR_11 = VAR_3;
  VAR_9->dev_name = (const char *) VAR_7;
  VAR_9->dev_name_len = VAR_11;

  VAR_7 = VAR_10;

  VAR_6->num_clients++;
  if (VAR_6->num_clients == VAR_2)
   return -1;
 }

 return 0;
}
