
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_global {int p2p_disallow_freq; int p2p_go_avoid_freq; } ;


 int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct wpa_global *VAR_0,
        unsigned int VAR_1)
{
 if (FUNC_0(&VAR_0->p2p_go_avoid_freq, VAR_1))
  return 1;
 return FUNC_0(&VAR_0->p2p_disallow_freq, VAR_1);
}
