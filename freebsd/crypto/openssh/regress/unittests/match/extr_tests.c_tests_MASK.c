
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*,int) ;

void
FUNC_7(void)
{
 FUNC_3("match_pattern");
 FUNC_0(FUNC_5("", ""), 1);
 FUNC_0(FUNC_5("", "aaa"), 0);
 FUNC_0(FUNC_5("aaa", ""), 0);
 FUNC_0(FUNC_5("aaa", "aaaa"), 0);
 FUNC_0(FUNC_5("aaaa", "aaa"), 0);
 FUNC_2();

 FUNC_3("match_pattern wildcard");
 FUNC_0(FUNC_5("", "*"), 1);
 FUNC_0(FUNC_5("a", "?"), 1);
 FUNC_0(FUNC_5("aa", "a?"), 1);
 FUNC_0(FUNC_5("a", "*"), 1);
 FUNC_0(FUNC_5("aa", "a*"), 1);
 FUNC_0(FUNC_5("aa", "?*"), 1);
 FUNC_0(FUNC_5("aa", "**"), 1);
 FUNC_0(FUNC_5("aa", "?a"), 1);
 FUNC_0(FUNC_5("aa", "*a"), 1);
 FUNC_0(FUNC_5("ba", "a?"), 0);
 FUNC_0(FUNC_5("ba", "a*"), 0);
 FUNC_0(FUNC_5("ab", "?a"), 0);
 FUNC_0(FUNC_5("ab", "*a"), 0);
 FUNC_2();

 FUNC_3("match_pattern_list");
 FUNC_0(FUNC_6("", "", 0), 0);
 FUNC_0(FUNC_6("", "*", 0), 1);
 FUNC_0(FUNC_6("", "!*", 0), -1);
 FUNC_0(FUNC_6("", "!a,*", 0), 1);
 FUNC_0(FUNC_6("", "*,!a", 0), 1);
 FUNC_0(FUNC_6("", "a,!*", 0), -1);
 FUNC_0(FUNC_6("", "!*,a", 0), -1);
 FUNC_0(FUNC_6("a", "", 0), 0);
 FUNC_0(FUNC_6("a", "*", 0), 1);
 FUNC_0(FUNC_6("a", "!*", 0), -1);
 FUNC_0(FUNC_6("a", "!a", 0), -1);

 FUNC_0(FUNC_6("a", "!a,*", 0), -1);
 FUNC_0(FUNC_6("b", "!a,*", 0), 1);
 FUNC_0(FUNC_6("a", "*,!a", 0), -1);
 FUNC_0(FUNC_6("b", "*,!a", 0), 1);
 FUNC_0(FUNC_6("a", "a,!*", 0), -1);
 FUNC_0(FUNC_6("b", "a,!*", 0), -1);
 FUNC_0(FUNC_6("a", "a,!a", 0), -1);

 FUNC_0(FUNC_6("a", "!*,a", 0), -1);
 FUNC_0(FUNC_6("b", "!*,a", 0), -1);
 FUNC_2();

 FUNC_3("match_pattern_list lowercase");
 FUNC_0(FUNC_6("abc", "ABC", 0), 0);
 FUNC_0(FUNC_6("ABC", "abc", 0), 0);
 FUNC_0(FUNC_6("abc", "ABC", 1), 1);
 FUNC_0(FUNC_6("ABC", "abc", 1), 0);
 FUNC_2();

 FUNC_3("addr_match_list");
 FUNC_0(FUNC_4("127.0.0.1", "127.0.0.1/44"), -2);
 FUNC_0(FUNC_4(((void*)0), "127.0.0.1/44"), -2);
 FUNC_0(FUNC_4("a", "*"), 0);
 FUNC_0(FUNC_4("127.0.0.1", "*"), 1);
 FUNC_0(FUNC_4(((void*)0), "*"), 0);
 FUNC_0(FUNC_4("127.0.0.1", "127.0.0.1"), 1);
 FUNC_0(FUNC_4("127.0.0.1", "127.0.0.2"), 0);
 FUNC_0(FUNC_4("127.0.0.1", "!127.0.0.1"), -1);

 FUNC_0(FUNC_4("127.0.0.255", "127.0.0.0/24"), 1);
 FUNC_0(FUNC_4("127.0.1.1", "127.0.0.0/24"), 0);
 FUNC_0(FUNC_4("127.0.0.1", "127.0.0.0/24"), 1);
 FUNC_0(FUNC_4("127.0.0.1", "127.0.1.0/24"), 0);
 FUNC_0(FUNC_4("127.0.0.1", "!127.0.0.0/24"), -1);

 FUNC_0(FUNC_4("127.0.0.1", "10.0.0.1,!127.0.0.1"), -1);
 FUNC_0(FUNC_4("127.0.0.1", "!127.0.0.1,10.0.0.1"), -1);
 FUNC_0(FUNC_4("127.0.0.1", "10.0.0.1,127.0.0.2"), 0);
 FUNC_0(FUNC_4("127.0.0.1", "127.0.0.2,10.0.0.1"), 0);


 FUNC_2();
 FUNC_3("match_filter_list");
 do { char *VAR_0 = FUNC_0(("a,b,c"), ("")); FUNC_0(VAR_0, "a,b,c"); FUNC_0(VAR_0); } while (0);
 do { char *VAR_1 = FUNC_0(("a,b,c"), ("a")); FUNC_0(VAR_1, "b,c"); FUNC_0(VAR_1); } while (0);
 do { char *VAR_2 = FUNC_0(("a,b,c"), ("b")); FUNC_0(VAR_2, "a,c"); FUNC_0(VAR_2); } while (0);
 do { char *VAR_3 = FUNC_0(("a,b,c"), ("c")); FUNC_0(VAR_3, "a,b"); FUNC_0(VAR_3); } while (0);
 do { char *VAR_4 = FUNC_0(("a,b,c"), ("a,b")); FUNC_0(VAR_4, "c"); FUNC_0(VAR_4); } while (0);
 do { char *VAR_5 = FUNC_0(("a,b,c"), ("a,c")); FUNC_0(VAR_5, "b"); FUNC_0(VAR_5); } while (0);
 do { char *VAR_6 = FUNC_0(("a,b,c"), ("b,c")); FUNC_0(VAR_6, "a"); FUNC_0(VAR_6); } while (0);
 do { char *VAR_7 = FUNC_0(("a,b,c"), ("a,b,c")); FUNC_0(VAR_7, ""); FUNC_0(VAR_7); } while (0);
 do { char *VAR_8 = FUNC_0(("a,b,c"), ("b,c")); FUNC_0(VAR_8, "a"); FUNC_0(VAR_8); } while (0);
 do { char *VAR_9 = FUNC_0((""), ("a,b,c")); FUNC_0(VAR_9, ""); FUNC_0(VAR_9); } while (0);
 FUNC_2();







}
