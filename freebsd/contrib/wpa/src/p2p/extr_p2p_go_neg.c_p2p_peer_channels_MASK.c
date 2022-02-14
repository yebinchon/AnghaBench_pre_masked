
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct p2p_device {int dummy; } ;
struct p2p_data {int channels; } ;


 int FUNC_0 (struct p2p_data*,int *,struct p2p_device*,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(struct p2p_data *VAR_0, struct p2p_device *VAR_1,
        const u8 *VAR_2, size_t VAR_3)
{
 return FUNC_0(VAR_0, &VAR_0->channels, VAR_1,
           VAR_2, VAR_3);
}
