
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgscan_simple_data {int wpa_s; scalar_t__ signal_threshold; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bgscan_simple_data*,int *) ;
 int FUNC_1 (struct bgscan_simple_data*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct bgscan_simple_data *VAR_2 = VAR_1;
 FUNC_0(VAR_0, VAR_2, ((void*)0));
 if (VAR_2->signal_threshold)
  FUNC_2(VAR_2->wpa_s, 0, 0);
 FUNC_1(VAR_2);
}
